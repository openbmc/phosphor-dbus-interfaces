Session Management 

Author: Suryakanth.sekar@linux.intel.com
Primary assignee: Suryakanth.sekar@linux.intel.com
Other contributors: vernon.mauery@linux.intel.com,richard.marian.thomaiyar@linux.intel.com
Created:  21 March 2019 

Problem Description
According to the ipmi, We  should  able to get the active session informatin and mange the existing session in system interface also. 

Requirements
Session is managed by net-ipmid but we need  to get the active session information and manage the session in system interface also.

Proposed Design
we made net-ipmid as owner for session management and it will create the new session object for every active session with all properities filled. 
so that all active session deatils can be access in system interface (ipmid) also and we can close the active session in system interface also. 

Alternatives Considered
Creating separate daemon for session independent of LAN and host. 

Impacts
NIL

Testing
you should able to get the session information in system interface and able to close the active session in system interface. 

