The purpose of this project is to mirror code at: 

	http://people.csail.mit.edu/fredette/tme/tme-0.8.tar.gz

Build Instructions:
	
	tar xzf glib-1.2.10.tar.gz
	cd glib-1.2.10
	./configure
	make
	make install (as root)
	tar xzf	gtk+-1.2.10.tar.gz
	cd gtk+-1.2.10
	./configure
	make
	make install (as root)
	tar xzf tme-0.4.tar.gz
	cd tme-0.4
	./configure --disable-shared
	make
	make install (as root)

Setup:

http://people.csail.mit.edu/fredette/tme/sun4-75-nbsd.html	

Running:

Add the following lines or similar at appropriate places in your .profile or .basrc
otherwise it isn't going to work:

	echo "PATH=$PATH:/usr/local/bin;export PATH"
	echo "LTDL_LIBRARY_PATH=/usr/local/lib;export LTDL_LIBRARY_PATH"




I haven't contacted the original developer but will get around to it once I have something to show.

1. My todo is to fix Linux and uptodate GCC support, 
2. Perhaps remove libltdl, convert it to libdl or something to improve the situation.
3. Change GUI to SDL like QEMU since gtk is a sinking bloatship.
4. Improve non BSD networking.

Currently im only going to work on 1.  if someone else wants to work on the rest feel free!

Of course I'll mark 1. done when its done and move on.

Also I intend to mirror documentation from the sun3/4 zoo and original project pages
just in case something happens to them. 

-cb88


