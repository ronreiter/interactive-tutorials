build:
	docker build . -t interactive-tutorials
run:
	docker run -p 5000:5000 interactive-tutorials "-d learnpython.org"
run_prod:
	docker run -p 5000:80 interactive-tutorials "-d learnpython.org"
