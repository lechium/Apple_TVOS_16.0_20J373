//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKFidoDaemonServerHandler : NSObject
{
}

- (void)_handleFinishFidoResponse:(id)arg1 data:(id)arg2 context:(id)arg3 recoveryToken:(id)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0040000000065e96
- (void)finishFidoAuthWithResponse:(id)arg1 client:(id)arg2 context:(id)arg3 recoveryToken:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000659b7
- (void)_handleStartFidoResponse:(id)arg1 data:(id)arg2 context:(id)arg3 recoveryToken:(id)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000657c0
- (void)startFidoAuthWithContext:(id)arg1 recoveryToken:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000065346

@end

