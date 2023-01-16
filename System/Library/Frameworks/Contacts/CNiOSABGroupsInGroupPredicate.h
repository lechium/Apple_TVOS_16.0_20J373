//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsInGroupPredicate : CNPredicate
{
    NSString *_parentGroupIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ae0bb
@property(readonly, copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000adfc1
- (id)initWithParentGroupIdentifier:(id)arg1;	// IMP=0x00000000000adf0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
