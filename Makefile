build:
	docker build . -t interactive-tutorials
run:
	docker run -p 5000:5000 interactive-tutorials "-d learnpython.org"
run_prod:
	docker run -p 5000:80 interactive-tutorials "-d learnpython.org"
install_service:
	cp website_docker.conf /etc/init
run_service:
	start website_docker
stop_service:
	stop website_docker

