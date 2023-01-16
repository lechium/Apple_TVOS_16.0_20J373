//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

@interface CKDPSubscriptionNotification : PBCodable
{
    NSMutableArray *_additionalFields;	// 8 = 0x8
    CKDPSubscriptionNotificationAlert *_alert;	// 16 = 0x10
    NSString *_collapseIdKey;	// 24 = 0x18
    _Bool _shouldBadge;	// 32 = 0x20
    _Bool _shouldSendContentAvailable;	// 33 = 0x21
    _Bool _shouldSendMutableContent;	// 34 = 0x22
    struct {
        unsigned int shouldBadge:1;
        unsigned int shouldSendContentAvailable:1;
        unsigned int shouldSendMutableContent:1;
    } _has;	// 36 = 0x24
}

+ (Class)additionalFieldsType;	// IMP=0x0010000000343d4f
- (void).cxx_destruct;	// IMP=0x0000000000344fd5
@property(retain, nonatomic) NSString *collapseIdKey; // @synthesize collapseIdKey=_collapseIdKey;
@property(nonatomic) _Bool shouldSendMutableContent; // @synthesize shouldSendMutableContent=_shouldSendMutableContent;
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(retain, nonatomic) NSMutableArray *additionalFields; // @synthesize additionalFields=_additionalFields;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(retain, nonatomic) CKDPSubscriptionNotificationAlert *alert; // @synthesize alert=_alert;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000344d01
- (unsigned long long)hash;	// IMP=0x0000000000344c24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000344a85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000344815
- (void)copyTo:(id)arg1;	// IMP=0x00000000003446ad
- (void)writeTo:(id)arg1;	// IMP=0x00000000003444c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003444b8
- (id)dictionaryRepresentation;	// IMP=0x0000000000343eb8
- (id)description;	// IMP=0x0000000000343e09
@property(readonly, nonatomic) _Bool hasCollapseIdKey;
@property(nonatomic) _Bool hasShouldSendMutableContent;
@property(nonatomic) _Bool hasShouldSendContentAvailable;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000343d32
- (unsigned long long)additionalFieldsCount;	// IMP=0x0000000000343d15
- (void)addAdditionalFields:(id)arg1;	// IMP=0x0000000000343cab
- (void)clearAdditionalFields;	// IMP=0x0000000000343c8e
@property(nonatomic) _Bool hasShouldBadge;
@property(readonly, nonatomic) _Bool hasAlert;

@end
