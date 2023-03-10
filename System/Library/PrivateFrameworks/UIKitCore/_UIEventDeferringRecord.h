//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, _UIEventDeferringDescriptor, _UIEventDeferringOwnershipToken;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringRecord : NSObject
{
    NSMutableSet *_recreationReasons;	// 8 = 0x8
    _UIEventDeferringDescriptor *_descriptor;	// 16 = 0x10
    id <BSInvalidatable> _invalidationToken;	// 24 = 0x18
    _UIEventDeferringOwnershipToken *_deferringToken;	// 32 = 0x20
    void *_recordingManagerPointer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000ffa3eb
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000ff9ef8
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000ff9ea8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000ff9e58
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000ff9ce2
- (id)succinctDescription;	// IMP=0x0000000000ff9c92
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000ff998f

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

