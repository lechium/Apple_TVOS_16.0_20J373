//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface VCTransportSessionNW
{
    NSObject<OS_nw_connection> *_rtpConnection;	// 168 = 0xa8
    NSObject<OS_nw_connection> *_rtcpConnection;	// 176 = 0xb0
    NSString *_rtpConnectionID;	// 184 = 0xb8
    NSString *_rtcpConnectionID;	// 192 = 0xc0
    _Bool _isSharedConnection;	// 200 = 0xc8
    struct tagVCNWConnectionMonitor *_monitor;	// 208 = 0xd0
    CDUnknownFunctionPointerType _notificationHandler;	// 216 = 0xd8
    CDUnknownFunctionPointerType _packetEventHandler;	// 224 = 0xe0
    void *_handlerContext;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 240 = 0xf0
    _Bool _didScheduleReceive;	// 248 = 0xf8
    int _networkInterfaceType;	// 252 = 0xfc
    _Bool _isIPv6;	// 256 = 0x100
    unsigned int _networkMTU;	// 260 = 0x104
}

- (_Bool)isIPv6;	// IMP=0x00000000000530bb
- (unsigned int)networkMTU;	// IMP=0x00000000000530ab
- (int)networkInterfaceType;	// IMP=0x000000000005309b
- (_Bool)initializeIsIPv6;	// IMP=0x0000000000052ef3
- (_Bool)initializeNetworkMTU;	// IMP=0x0000000000052dee
- (void)initializeInterfaceType;	// IMP=0x0000000000052b42
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)arg1;	// IMP=0x000000000005298d
- (int)dupRTCPNWConnectionBackingSocket;	// IMP=0x0000000000052970
- (int)dupRTPNWConnectionBackingSocket;	// IMP=0x0000000000052953
- (void)destroyNWMonitorInternal;	// IMP=0x0000000000052927
- (void)destroyNWMonitor;	// IMP=0x000000000005288e
- (void)createNWMonitor;	// IMP=0x0000000000052774
- (void)stop;	// IMP=0x0000000000052713
- (void)start;	// IMP=0x0000000000052559
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x00000000000521f9
- (_Bool)setupNWConnection:(id)arg1;	// IMP=0x0000000000052031
- (_Bool)setStateChangeHandlerForConnection:(id)arg1 result:(_Bool *)arg2 semaphore:(id)arg3;	// IMP=0x0000000000051dc8
- (void)handleStateChanges:(int)arg1 error:(id)arg2 semaphore:(id)arg3 operationResult:(_Bool *)arg4;	// IMP=0x0000000000051cb5
- (void)dealloc;	// IMP=0x0000000000051bc8
- (void)createNWConnection:(id *)arg1 forConnectionID:(id)arg2;	// IMP=0x0000000000051b1a
- (id)initWithRTPNWConnectionID:(id)arg1 RTCPNWConnectionID:(id)arg2 handlerQueue:(id)arg3 context:(void *)arg4 notificationHandler:(CDUnknownFunctionPointerType)arg5 eventHandler:(CDUnknownFunctionPointerType)arg6;	// IMP=0x0000000000051791

@end
