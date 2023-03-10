//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSmartPropertyFetcher : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ab942
- (id)_cn_ignorableKeys;	// IMP=0x00000000000ab9c9
- (id)_cn_optionalKeys;	// IMP=0x00000000000ab9b0
- (id)_cn_requiredKeys;	// IMP=0x00000000000ab997
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab991
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab97f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab950
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ab94a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

