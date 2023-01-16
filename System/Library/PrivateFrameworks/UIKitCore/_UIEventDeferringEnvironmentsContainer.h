//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringEnvironmentsContainer : NSObject
{
    NSSet *_environments;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e30ede
- (void).cxx_destruct;	// IMP=0x0000000000e310bf
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000e31069
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000e31019
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e30f09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e30ee6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e30ed3
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000e30ba5
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000e30b55
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000e30b05
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000e30a84
- (id)succinctDescription;	// IMP=0x0000000000e30a34
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e308e4
- (id)init;	// IMP=0x0000000000e30722

// Remaining properties
@property(readonly) Class superclass;

@end

