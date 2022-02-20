Tutorial
--------

HTML5 includes the `<video>` tag. It is used for displaying videos.

    <video width="400" height="400" controls>
        <source src="video.mp4" type="video/mp4">
    </video>

### Code explained

`<video>` is the main tag that is used for displaying videos.
`controls` adds buttons for controlling the video.
`<source>` adds a file.
`src` specifies the file location on the server.
`type` specifies the file type (In this case MP4)

Exercise
--------

Add `myvideo.mp4` to this website with height 600 and width 649.


Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
        
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <video height="600" width="649" controls>
                <source src="myvideo.mp4" type="video/mp4>
            </video>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
            <video height="600" width="649" controls>
                <source src="myvideo.mp4" type="video/mp4>
            </video>
        </body>
    </html>
