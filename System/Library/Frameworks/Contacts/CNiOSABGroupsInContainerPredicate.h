//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsInContainerPredicate : CNPredicate
{
    NSString *_containerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000048218
- (void).cxx_destruct;	// IMP=0x00000000000485ba
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000048371
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000482f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048220
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000048204
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x000000000004814f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
