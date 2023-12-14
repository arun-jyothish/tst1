# Temporary document



## Reverse proxy

![pic](https://miro.medium.com/v2/resize:fit:640/format:webp/1*Gm_q3hi9cBRFeGA1NoxowQ.png)


[Nginx comparison](https://www.nginx.com/products/nginx/compare-models/)

## WHY REVERSE PROXY
	+ Load balancing
	+ Adaptive bitrate
	+ protection from attacks
	+ caching
	+ logging
	
### RTSP AND HLS

RTSP and HLS
![](https://www.wowza.com/wp-content/uploads/Protocols-Workflow-1.png)
<br>
<br>
### RTMP VS RTSP

+ RTMP comes with a larger delay for your viewers while offering more support for different codecs. It also provides better low-latency streaming and a more stable connection. However, it doesn’t work with HTML5 and HTTP, leading to accessibility issues.
<br>
<br>
+ RTSP offers a much shorter delay but, in turn, supports fewer codecs. It also doesn’t have the same stability that RTMP offers, sacrificing stability for customization.

<br>
<br>
### VOD & LIVE 
Live Streaming vs. VOD. While live streaming and VOD are both methods of online video delivery, you cannot have live to VOD streaming without first recording live content. VOD is, at its core, a method for viewing pre-recorded video content.
<br>
<br>


[A Comprehensive Overview of RTSP vs RTMP](https://www.gumlet.com/learn/rtsp-vs-rtmp/)

### PROXY SERVER COMPARISON

![](https://pbs.twimg.com/media/Fd1XzVtUcAAlOrH?format=jpg&name=4096x4096)
<br>
<br>
[Forward vs. Reverse Proxy: Benefits & Use Cases in 2023](https://research.aimultiple.com/forward-vs-reverse-proxy)

### LIVE STREAMING VIA HLS
As per HLS specs,segment duration must be 6 sec. But to achieve low latency we usually keep 2sec as segment duration specially in live tv stream.
<br>
<br>
[What is HTTP Live Streaming? | HLS streaming](cloudflare.com/learning/video/what-is-http-live-streaming/)
### LIVE STREAMING 
LATENCY CHART
![wowza latency chart](https://www.wowza.com/wp-content/uploads/Low-Latency-Graphs_Q9-1.png)
COMPARISON AMONG STREAMING PROTOCOLS
![wowza comparison among protocols](https://restream.io/blog/content/images/2020/07/video-streaming-protocols-comparison.png)
STREAMING PROTOCOLS LATENCY SPECTRUM
![STREAMING LATENCY WOWZA](https://www.wowza.com/wp-content/uploads/latency-continuum-2021-with-protocols-700x300-1.png)

### RTMP EXPLAINED

[What is RTMP Streaming- Everything you need to know in 2022](https://www.dreamcast.in/blog/rtmp-streaming/)


### ADAPTIVE BITRATE STREAMING

#### What is HTTP dynamic streaming (HDS)?
+ HTTP dynamic streaming, or HDS, is an adaptive bitrate streaming method developed by Adobe
+ HDS can be used for on-demand streaming or live streaming
+ HDS is not supported by Apple devices.
[More..](https://www.cloudflare.com/learning/video/what-is-http-dynamic-streaming/)


### Advantages of HLS
+ Adaptive bitrate
+ Widely supported platforms
+ Best Quality video 

### Disadvantages of HLS
+ \> Latency ( 3-20 sec ) 
<br>
<br>
[more..](https://medium.com/av-transcode/hls-streaming-protocol-pros-and-cons-of-choosing-it-12ef080163b0uc )

<br>
<br>
[What is Adaptive bitrate streaming](https://www.cloudflare.com/learning/video/what-is-adaptive-bitrate-streaming/)

![multibitrate](https://www.muvi.com/wp-content/uploads/2020/04/adaptive-birtate-vs-multi-bitrate-streaming.jpg)
[Adaptive Bitrate Vs Multi-bitrart Streaming](https://www.muvi.com/blogs/adaptive-bitrate-vs-multi-bitrate-streaming)


[6 Preffered Format for Proffessional Broadcasting](https://www.dacast.com/blog/video-streaming-protocol/)

### VARIOUS WAYS TO STREAM
[7-ways-to-stream-rtsp-on-the-page](https://flashphoner.com/7-ways-to-stream-rtsp-on-the-page/)

[Playback of RTSP video streams in browsers and mobile applications with the use of WebRTC and Websocket](https://flashphoner.com/ip-camera-streaming-via-rtsp-for-webrtc-and-websocket-browsers/)
![](https://flashphoner.com/wp-content/uploads/2020/03/playback_browser_ios_android_RTSP_ipcams_WebRTC-3.svg)

![](https://antmedia.io/wp-content/uploads/2019/05/Ant_Media_Server_IP_Camera_WebBrowser.png)

Display method 	| Best for 	| Latency |
-----------------|-----------|---------|
RTMP 	| Legacy Flash, Flex or Adobe Air applications 	| medium
RTMP + HTML5 	| IE, Edge, Mac Safari browsers if Flash Player is installed 	| medium
RTMFP 	| Legacy Flash, Flex or Adobe Air applications that require low latency 	| low
RTMFP + HTML5 | 	IE, Edge, Mac Safari browsers if Flash Player is installed and when low latency is crucial 	| low
WebRTC 	| Chrome, Firefox, Opera browsers on mobile devices and desktops on Android and when real-time playback is crucial. 	| real-time
Websocket 	| Browsers that lack support for Flash and WebRTC, but the task requires low to medium latency. 	| medium
HLS 	| Any browser as long as latency is not important. 	| high
Android app, WebRTC |  	Native mobile applications for Android that require real-time latency. 	| real-time
iOS app, WebRTC 	| Native mobile applications for iOS that require real-time latency. 	| real-time


### WEBRTC


[WebRTC Video Streaming: A Full Guide to Interactive Streaming](https://riverside.fm/blog/webrtc-video-streaming)

WebRTC is a free and open-source project providing web browsers and mobile applications with real-time communication via application programming

![](https://rightandabove.com/wp-content/uploads/WebRTC2.png)
TURN ( Traversal Using Relays Around NAT )
STUN ( Session Traversal Utilities for NAT )
<!-- ![](https://altanaitelecom.files.wordpress.com/2014/05/webrtc-to-pstn-callflow.jpg) -->



[Browser-based WebRTC stream from RTSP IP camera with low latency](https://flashphoner.com/browser-based-webrtc-stream-from-rtsp-ip-camera-with-low-latency/)


<br>
<br>

![eyenix-streaming-usecase](eyenix_streaming.png)
<br>
<br>

## TRANSCODING

![img](https://www.wowza.com/uploads/images/live-transcoding-diagram-detailed-1140x630.png)

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
