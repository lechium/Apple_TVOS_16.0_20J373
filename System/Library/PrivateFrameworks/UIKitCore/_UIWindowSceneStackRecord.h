//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneStackRecord : NSObject
{
    UIWindowScene *_windowScene;	// 8 = 0x8
    unsigned long long _evaluationStrategy;	// 16 = 0x10
    unsigned long long _lastPushedTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003178a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003142e
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000313de
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003138e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000031279
- (id)succinctDescription;	// IMP=0x0000000000031229
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

