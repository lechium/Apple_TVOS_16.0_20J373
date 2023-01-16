//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABURLContactPredicate : CNPredicate
{
    NSString *_urlString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a5513
- (void).cxx_destruct;	// IMP=0x00000000000a5abc
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a59d2
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000a576a
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000a5684
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000a567c
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000a5674
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000a566c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a55ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a551b
- (id)initWithURLString:(id)arg1;	// IMP=0x00000000000a5499

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
