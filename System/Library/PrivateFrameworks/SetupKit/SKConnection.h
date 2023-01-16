//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBConnection, CUPairingSession, CUPairingStream, NSData, NSError, NSMutableArray, NSMutableDictionary, NSString, SKDevice;
@protocol CUReadWriteRequestable, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKConnection : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    unsigned long long _authThrottleDeadlineTicks;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_authThrottleTimer;	// 24 = 0x18
    CDStruct_798ebea5 _frameHeader;	// 32 = 0x20
    id <CUReadWriteRequestable> _requestable;	// 40 = 0x28
    int _runState;	// 48 = 0x30
    _Bool _invalidateCalled;	// 52 = 0x34
    _Bool _invalidateDone;	// 53 = 0x35
    unsigned long long _mainAuthTagLength;	// 56 = 0x38
    CUPairingStream *_mainStream;	// 64 = 0x40
    CUPairingSession *_pairSetupSession;	// 72 = 0x48
    CUPairingSession *_pairVerifySession;	// 80 = 0x50
    _Bool _readRequested;	// 88 = 0x58
    _Bool _receivingHeader;	// 89 = 0x59
    NSMutableDictionary *_requests;	// 96 = 0x60
    NSMutableArray *_sendArray;	// 104 = 0x68
    _Bool _showPasswordCalled;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_startTimer;	// 120 = 0x78
    _Bool _stepDone;	// 128 = 0x80
    NSError *_stepError;	// 136 = 0x88
    struct LogCategory *_ucat;	// 144 = 0x90
    unsigned int _xidLast;	// 152 = 0x98
    _Bool _clientMode;	// 156 = 0x9c
    int _passwordType;	// 160 = 0xa0
    unsigned int _bluetoothUseCase;	// 164 = 0xa4
    int _state;	// 168 = 0xa8
    CDUnknownBlockType _authCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _authHidePasswordHandler;	// 184 = 0xb8
    CDUnknownBlockType _authShowPasswordHandler;	// 192 = 0xc0
    CDUnknownBlockType _authPromptHandler;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 208 = 0xd0
    NSString *_label;	// 216 = 0xd8
    NSString *_password;	// 224 = 0xe0
    CBConnection *_bleConnection;	// 232 = 0xe8
    SKDevice *_blePeerDevice;	// 240 = 0xf0
    CDUnknownBlockType _errorHandler;	// 248 = 0xf8
    NSData *_pskData;	// 256 = 0x100
    CDUnknownBlockType _invalidationHandler;	// 264 = 0x108
    CDUnknownBlockType _receivedEventHandler;	// 272 = 0x110
    CDUnknownBlockType _receivedRequestHandler;	// 280 = 0x118
    CDUnknownBlockType _sendDataHandler;	// 288 = 0x120
    CDUnknownBlockType _stateChangedHandler;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000000a37d
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType sendDataHandler; // @synthesize sendDataHandler=_sendDataHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedEventHandler; // @synthesize receivedEventHandler=_receivedEventHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSData *pskData; // @synthesize pskData=_pskData;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) _Bool clientMode; // @synthesize clientMode=_clientMode;
@property(nonatomic) unsigned int bluetoothUseCase; // @synthesize bluetoothUseCase=_bluetoothUseCase;
@property(retain, nonatomic) SKDevice *blePeerDevice; // @synthesize blePeerDevice=_blePeerDevice;
@property(retain, nonatomic) CBConnection *bleConnection; // @synthesize bleConnection=_bleConnection;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType authPromptHandler; // @synthesize authPromptHandler=_authPromptHandler;
@property(copy, nonatomic) CDUnknownBlockType authShowPasswordHandler; // @synthesize authShowPasswordHandler=_authShowPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authHidePasswordHandler; // @synthesize authHidePasswordHandler=_authHidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
- (void)_receivedResponse:(id)arg1;	// IMP=0x0000000000009d11
- (void)_receivedRequest:(id)arg1;	// IMP=0x00000000000098d3
- (void)_receivedEvent:(id)arg1;	// IMP=0x0000000000009661
- (void)_receivedObject:(id)arg1;	// IMP=0x000000000000959b
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 encryptedObjectData:(id)arg2;	// IMP=0x0000000000009300
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 body:(id)arg2;	// IMP=0x0000000000008f99
- (void)_receiveCompletion:(id)arg1;	// IMP=0x0000000000008a40
- (void)_receiveStart:(id)arg1;	// IMP=0x00000000000088e4
- (void)receivedData:(id)arg1;	// IMP=0x0000000000008856
- (void)_timeoutForXID:(id)arg1;	// IMP=0x000000000000869b
- (void)_timeoutForSendEntry:(id)arg1;	// IMP=0x000000000000844e
- (void)_abortRequestsWithError:(id)arg1;	// IMP=0x00000000000083a3
- (void)_processSends;	// IMP=0x0000000000008053
- (void)_sendHeaderData:(id)arg1 bodyData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007dca
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;	// IMP=0x0000000000007ce0
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;	// IMP=0x0000000000007acf
- (void)_sendResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000754b
- (void)_sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 sendEntry:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006db8
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006a51
- (void)_sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000066aa
- (void)sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000063da
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000061b1
- (void)_serverError:(id)arg1;	// IMP=0x0000000000006108
- (void)_serverPairVerifyCompleted:(id)arg1;	// IMP=0x0000000000005f35
- (void)_serverPairVerifyContinueWithData:(id)arg1 start:(_Bool)arg2;	// IMP=0x0000000000005a68
- (void)_serverPairSetupCompleted:(id)arg1;	// IMP=0x000000000000585f
- (void)_serverPairSetupContinueWithData:(id)arg1 start:(_Bool)arg2;	// IMP=0x0000000000005298
- (void)_serverAcceptBLE;	// IMP=0x00000000000051c0
- (void)_serverAccept;	// IMP=0x0000000000005108
- (void)_serverRun;	// IMP=0x0000000000004f1d
- (void)_clientError:(id)arg1;	// IMP=0x0000000000004dc6
- (void)_clientPairVerifyCompleted:(id)arg1;	// IMP=0x0000000000004bcc
- (void)_clientPairVerifyWithData:(id)arg1;	// IMP=0x0000000000004886
- (void)_clientPairVerifyStart;	// IMP=0x00000000000046cd
- (void)_clientPairSetupCompleted:(id)arg1;	// IMP=0x000000000000449d
- (void)_clientPairSetupPromptWithFlags:(unsigned int)arg1 passwordType:(int)arg2 throttleSeconds:(int)arg3;	// IMP=0x000000000000426a
- (void)_clientPairSetupContinueWithData:(id)arg1;	// IMP=0x0000000000003ea2
- (void)_clientPairSetupStart;	// IMP=0x0000000000003c96
- (void)_clientConnectCompleted:(id)arg1;	// IMP=0x0000000000003b2d
- (void)_clientConnectStartBLE;	// IMP=0x0000000000003848
- (void)_clientConnectStart;	// IMP=0x00000000000037c8
- (void)_clientRun;	// IMP=0x00000000000034d5
- (void)_updateExternalState;	// IMP=0x00000000000033df
- (void)tryPassword:(id)arg1;	// IMP=0x0000000000003351
- (void)_run;	// IMP=0x000000000000332a
- (void)_pskPrepareClientMode:(_Bool)arg1;	// IMP=0x00000000000031e4
- (void)_pairVerifyInvalidate;	// IMP=0x000000000000318f
- (void)_pairSetupInvalidate;	// IMP=0x00000000000030fb
- (id)deriveKeyWithSaltPtr:(const void *)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void *)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000002f79
- (void)_invalidated;	// IMP=0x0000000000002dd1
- (void)_invalidateCore:(id)arg1;	// IMP=0x000000000000294b
- (void)_invalidateWithError:(id)arg1;	// IMP=0x000000000000287f
- (void)invalidate;	// IMP=0x0000000000002831
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000025ca
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000253c
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000002296
- (id)init;	// IMP=0x00000000000021ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
