//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession, NSString, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSBiometricsPresentationProxy : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    NSURLSessionTask *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015398f
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001537cd
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001534ad
- (id)initWithSession:(id)arg1 task:(id)arg2;	// IMP=0x0000000000153414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

