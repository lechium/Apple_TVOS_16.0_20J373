//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBGestureRecognizerDescriptor;
@protocol PBGestureRecognizerDescriptor;

@interface PBSystemGestureRecognizerDescriptor : NSObject
{
    PBGestureRecognizerDescriptor<PBGestureRecognizerDescriptor> *_gestureRecognizerDescriptor;	// 8 = 0x8
    unsigned long long _activationMask;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000096882
@property(readonly, nonatomic) unsigned long long activationMask; // @synthesize activationMask=_activationMask;
@property(readonly, nonatomic) PBGestureRecognizerDescriptor<PBGestureRecognizerDescriptor> *gestureRecognizerDescriptor; // @synthesize gestureRecognizerDescriptor=_gestureRecognizerDescriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000967a5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000096754
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000966cb
- (id)succinctDescription;	// IMP=0x001000000009667a
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000096531
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDescriptor:(id)arg1;	// IMP=0x00100000000964cb
- (id)initWithDescriptor:(id)arg1 activationMask:(unsigned long long)arg2;	// IMP=0x0010000000096455

// Remaining properties
@property(readonly) Class superclass;

@end

