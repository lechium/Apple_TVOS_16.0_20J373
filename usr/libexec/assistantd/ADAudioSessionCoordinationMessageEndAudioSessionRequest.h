//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ADAudioSessionCoordinationMessageEndAudioSessionRequest : NSObject
{
    NSDate *_effectiveDate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000ad22a
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000acfbb
- (void).cxx_destruct;	// IMP=0x00100000000ad3fd
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
- (id)buildDictionaryRepresentation;	// IMP=0x00100000000ad392
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000ad2e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000ad2bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000ad232
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ad21f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ad17c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000ad0e0
@property(readonly, copy) NSString *description;
- (id)initWithEffectiveDate:(id)arg1;	// IMP=0x00100000000ad01c
- (id)init;	// IMP=0x00100000000ad008
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000acec7
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ad503

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

