//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges21CDMClientNotification : NSObject
{
    MISSING_TYPE *cdmProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009a8c0
- (id)init;	// IMP=0x000000000009a840
- (void)assetsUnavailable;	// IMP=0x000000000009a810
- (void)assetsAvailableForLocale:(id)arg1;	// IMP=0x000000000009a630
- (void)assetsAvailable;	// IMP=0x000000000009a3f0
- (void)processCDMNluRequestCallback:(id)arg1;	// IMP=0x000000000009a380
- (void)processCDMNluRequestErrorCallback:(id)arg1 error:(id)arg2;	// IMP=0x0000000000099f70

@end
