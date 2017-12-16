all: clean add commit push

add:
	git add .
commit:
	git commit -m "Updated files"
push:
	git push origin master

clean:
	rm -fr *.class *.obj *.out *.o *.exe