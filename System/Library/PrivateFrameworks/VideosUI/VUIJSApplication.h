//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIJSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSApplication : VUIJSObject
{
}

@property(readonly, nonatomic) NSDictionary *traitCollection;
- (void)reload:(id)arg1:(id)arg2;	// IMP=0x0000000000171bb9
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;	// IMP=0x0000000000171a9f
- (void)updatedAppWithOptions:(id)arg1;	// IMP=0x00000000001719f0
- (void)exitAppWithOptions:(id)arg1;	// IMP=0x0000000000171941
- (void)openURLWithOptions:(id)arg1;	// IMP=0x0000000000171892
- (void)resumeAppWithOptions:(id)arg1;	// IMP=0x00000000001717e3
- (void)suspendAppWithOptions:(id)arg1;	// IMP=0x0000000000171734
- (void)launchAppWithOptions:(id)arg1;	// IMP=0x0000000000171685

@end
