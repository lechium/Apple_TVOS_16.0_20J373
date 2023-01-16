//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDSPreflightStack : NSObject
{
    NSString *_IMSI;	// 8 = 0x8
    NSString *_PLMN;	// 16 = 0x10
    NSArray *_validationMechanisms;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000bed80
@property(readonly, nonatomic) NSArray *validationMechanisms; // @synthesize validationMechanisms=_validationMechanisms;
@property(readonly, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
@property(readonly, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
- (id)description;	// IMP=0x00100000000bec30
- (unsigned long long)hash;	// IMP=0x00100000000beb50
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000be6a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000be680
- (id)preflightStackByPoppingMechanism;	// IMP=0x00100000000be550
- (id)topMechanism;	// IMP=0x00100000000be4e0
- (_Bool)containsMechanisms;	// IMP=0x00100000000be480
- (_Bool)matchesIMSI:(id)arg1 PLMN:(id)arg2;	// IMP=0x00100000000be360
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 validationMechanisms:(id)arg3;	// IMP=0x00100000000be1f0

@end

