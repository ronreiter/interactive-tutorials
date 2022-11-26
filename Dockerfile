FROM python:3-slim-bullseye
EXPOSE 5000

WORKDIR /usr/src/app
ENV FLASK_DEBUG=1
ENV FLASK_APP=main:app

COPY requirements.txt ./
RUN pip install --no-cache-dir -r requirements.txt

COPY . .

ENTRYPOINT ["gunicorn", "-b", "0.0.0.0:5000", "-w", "2", "-t", "60", "--worker-tmp-dir", "/dev/shm", "main:app"]
