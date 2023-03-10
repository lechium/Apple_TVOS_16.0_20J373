//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPolicy.h"

__attribute__((visibility("hidden")))
@interface CNiOSABPolicy : CNPolicy
{
    void *_iOSABPolicy;	// 8 = 0x8
    void *_fakePerson;	// 16 = 0x10
    _Bool _abSourceIsContentReadonly;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008acad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008ad3c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008acb5
- (_Bool)isEqualToPolicy:(id)arg1;	// IMP=0x000000000008ac77
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008ac1a
- (_Bool)shouldRemoveContact:(id)arg1;	// IMP=0x000000000008abe2
- (_Bool)shouldAddContact:(id)arg1;	// IMP=0x000000000008abaa
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;	// IMP=0x000000000008aa27
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x000000000008a8c0
- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;	// IMP=0x000000000008a7c8
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x000000000008a461
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x000000000008a360
- (_Bool)isReadonly;	// IMP=0x000000000008a350
- (void)dealloc;	// IMP=0x000000000008a2ff
- (id)initWithAddressBookPolicy:(void *)arg1 readOnly:(_Bool)arg2;	// IMP=0x000000000008a282

@end

