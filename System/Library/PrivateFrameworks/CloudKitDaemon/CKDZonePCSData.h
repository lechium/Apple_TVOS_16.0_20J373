//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDSharePCSData, CKRecordID, CKRecordZoneID, NSData, NSDate;

@interface CKDZonePCSData
{
    struct _OpaquePCSShareProtection *_zoneishPCS;	// 40 = 0x28
    CKRecordZoneID *_zoneID;	// 48 = 0x30
    NSData *_zoneishPCSData;	// 56 = 0x38
    NSData *_zoneishPublicKeyID;	// 64 = 0x40
    CKDSharePCSData *_sharePCSData;	// 72 = 0x48
    CKRecordID *_shareID;	// 80 = 0x50
    NSDate *_zonePCSModificationDate;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000309d93
+ (id)dataWithZone:(id)arg1;	// IMP=0x0010000000309901
- (void).cxx_destruct;	// IMP=0x000000000030a179
@property(retain, nonatomic) NSDate *zonePCSModificationDate; // @synthesize zonePCSModificationDate=_zonePCSModificationDate;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;
@property(copy, nonatomic) NSData *zoneishPCSData; // @synthesize zoneishPCSData=_zoneishPCSData;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000309f18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000309d9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000309b53
- (id)itemID;	// IMP=0x0000000000309b41
@property(nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;
- (void)dealloc;	// IMP=0x0000000000309952
- (id)initWithZone:(id)arg1;	// IMP=0x000000000030977f

@end

