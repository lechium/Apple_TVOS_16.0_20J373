//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CLCompanionSyncAuthObject : PBCodable
{
    unsigned int _authMask;	// 8 = 0x8
    NSMutableArray *_interestZones;	// 16 = 0x10
    NSString *_clientKey;	// 24 = 0x18
    unsigned int _correctiveCompensationMask;	// 32 = 0x20
    int _notification;	// 36 = 0x24
    int _operationType;	// 40 = 0x28
    NSMutableArray *_vectorClocks;	// 48 = 0x30
    _Bool _clearClient;	// 56 = 0x38
    struct {
        unsigned int authMask:1;
        unsigned int correctiveCompensationMask:1;
        unsigned int notification:1;
        unsigned int clearClient:1;
    } _has;	// 60 = 0x3c
}

+ (Class)interestZonesType;	// IMP=0x0020000000590575
+ (Class)vectorClocksType;	// IMP=0x00100000005904c0
@property(retain, nonatomic) NSMutableArray *interestZones; // @synthesize interestZones=_interestZones;
@property(retain, nonatomic) NSMutableArray *vectorClocks; // @synthesize vectorClocks=_vectorClocks;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int correctiveCompensationMask; // @synthesize correctiveCompensationMask=_correctiveCompensationMask;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000591b41
- (unsigned long long)hash;	// IMP=0x0010000000591a1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000591875
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005914f3
- (void)copyTo:(id)arg1;	// IMP=0x001000000059132e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000591091
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000591084
- (id)dictionaryRepresentation;	// IMP=0x00100000005905fd
- (id)description;	// IMP=0x0010000000590586
- (id)interestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000590558
- (unsigned long long)interestZonesCount;	// IMP=0x001000000059053b
- (void)addInterestZones:(id)arg1;	// IMP=0x00100000005904ee
- (void)clearInterestZones;	// IMP=0x00100000005904d1
- (id)vectorClocksAtIndex:(unsigned long long)arg1;	// IMP=0x00100000005904a3
- (unsigned long long)vectorClocksCount;	// IMP=0x0010000000590486
- (void)addVectorClocks:(id)arg1;	// IMP=0x0010000000590439
- (void)clearVectorClocks;	// IMP=0x001000000059041c
- (int)StringAsOperationType:(id)arg1;	// IMP=0x00100000005903b0
- (id)operationTypeAsString:(int)arg1;	// IMP=0x0010000000590375
- (int)StringAsNotification:(id)arg1;	// IMP=0x001000000059030e
- (id)notificationAsString:(int)arg1;	// IMP=0x00100000005902d5
@property(nonatomic) _Bool hasNotification;
@property(nonatomic) int notification; // @synthesize notification=_notification;
@property(nonatomic) _Bool hasClearClient;
@property(nonatomic) _Bool clearClient; // @synthesize clearClient=_clearClient;
@property(nonatomic) _Bool hasCorrectiveCompensationMask;
@property(nonatomic) _Bool hasAuthMask;
@property(nonatomic) unsigned int authMask; // @synthesize authMask=_authMask;
- (void)dealloc;	// IMP=0x00100000005900e8

@end

