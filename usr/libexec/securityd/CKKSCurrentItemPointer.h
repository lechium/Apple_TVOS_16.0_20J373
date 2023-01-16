//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSProcessedState;

@interface CKKSCurrentItemPointer
{
    NSString<SecCKKSProcessedState> *_state;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_currentItemUUID;	// 24 = 0x18
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x004000000009bd8a
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000009b5d0
+ (long long)countByState:(id)arg1 contextID:(id)arg2 zone:(id)arg3 error:(id *)arg4;	// IMP=0x001000000009b312
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000009b0c9
+ (id)sqlColumns;	// IMP=0x001000000009b0bc
+ (id)sqlTable;	// IMP=0x001000000009b0af
+ (_Bool)deleteAll:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009af99
+ (id)allInZone:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009aebf
+ (id)remoteItemPointers:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009adc5
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000009ac57
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000009aae9
- (void).cxx_destruct;	// IMP=0x002000000009aaa7
@property(retain) NSString *currentItemUUID; // @synthesize currentItemUUID=_currentItemUUID;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
- (id)sqlValues;	// IMP=0x001000000009a708
- (id)whereClauseToFindSelf;	// IMP=0x001000000009a566
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000009a367
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000009a1b8
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0010000000099e7e
- (id)CKRecordName;	// IMP=0x0010000000099e6c
- (id)description;	// IMP=0x0010000000099d60
- (id)initForIdentifier:(id)arg1 contextID:(id)arg2 currentItemUUID:(id)arg3 state:(id)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6;	// IMP=0x0010000000099c7f

@end

