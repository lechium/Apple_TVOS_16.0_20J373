//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABEmailAddressContactPredicate
{
}

- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ab843
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000ab6ea
- (_Bool)_inputsAreValid;	// IMP=0x00000000000ab5df
- (_Bool)_stringsAreNonEmpty:(id)arg1;	// IMP=0x00000000000ab4ea
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000ab4e2
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000ab4da
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000ab4d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
