build:
	docker build . -t interactive-tutorials
run:
	docker run -p 5000:5000 interactive-tutorials -d learnpython.org
