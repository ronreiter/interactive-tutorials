from reportlab.lib.pagesizes import A4, landscape
from reportlab.pdfgen import canvas
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
from reportlab.lib.units import inch
import StringIO


def create_cert(filename, name, course_name, date, logo_loc):
    c = canvas.Canvas(filename, pagesize=landscape(A4))
    width, height = landscape(A4)

    pdfmetrics.registerFont(TTFont("Chancery Cursive", 'graphics/chancur.ttf'))

    c.drawImage('graphics/interactive-tutorials-cert.png', -0.7*inch, -0.5*inch, width=width+1.4*inch, height=height+1*inch, mask='auto')
    c.drawImage(logo_loc, width - 190, 60, width=130, height=20, mask='auto')

    c.setFillColorRGB(108.0/256, 48.0/256, 30.0/256)

    c.setFont("Chancery Cursive", 40)
    c.drawCentredString(480, 220, name)
    c.setFont("Times-Roman", 20)
    c.drawCentredString(480, 150, course_name)
    c.setFont("Times-Roman", 15)
    c.drawCentredString(530, 110, date.strftime("%B %-d, %Y"))
    c.save()


if __name__ == '__main__':
    create_cert(
        'foo.pdf',
        'Ron Reiter',
        'LearnPython.org Interactive Python Tutorial',
        datetime.datetime.now(),
        'static/img/logos/learnpython.org.png')
