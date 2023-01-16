//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ApplicationProxy, NSString;

@interface RefetchKeybag : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004153e
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
- (id)_performAuthorizationForAccount:(id)arg1;	// IMP=0x00100000000413bd
- (id)_performAuthenticationForAccount:(id)arg1;	// IMP=0x0010000000041011
- (id)_buildDialogRequest;	// IMP=0x0010000000040e26
- (id)_buildAuthenticateRequestForAccount:(id)arg1;	// IMP=0x0010000000040c78
- (void)performRefetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040bab
- (id)performRefetch;	// IMP=0x0010000000040b4a
- (id)initWithApplication:(id)arg1;	// IMP=0x0010000000040af0
- (id)init;	// IMP=0x0010000000040a2f

@end
