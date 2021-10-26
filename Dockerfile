FROM python:3
EXPOSE 5000

WORKDIR /usr/src/app
ENV FLASK_DEBUG=1
ENV FLASK_APP=main:app

COPY requirements.txt ./
RUN pip install --no-cache-dir -r requirements.txt

COPY . .

# ENTRYPOINT ["python", "main.py", "--host", "0.0.0.0", "--port", "5000"]
ENTRYPOINT [ "/bin/bash", "-l", "-c" ]

CMD ["gunicorn --workers $WORKERS --threads $THREADS --timeout $TIMEOUT --bind :$PORT --worker-tmp-dir /dev/shm main:app"]