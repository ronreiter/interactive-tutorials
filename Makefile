run:
	docker-compose up
run-daemon:
	docker-compose up -d
run-js:
	DEFAULT_DOMAIN=learn-js.org docker-compose up
build-local:
	python3 -m venv venv
	venv/bin/pip install -r requirements.txt
run-local:
	venv/bin/python main.py
build-docker:
	docker build . -t learnpython
run-docker: build-docker
	docker run -p 5000:5000 learnpython