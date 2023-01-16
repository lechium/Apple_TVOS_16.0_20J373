//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSCKRecordZoneMetadata, NSData, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKRecordMetadata : NSManagedObject
{
}

+ (id)recordFromEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004a047
+ (id)encodeRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000049ebb
+ (id)insertMetadataForObject:(id)arg1 setRecordName:(_Bool)arg2 inZoneWithID:(id)arg3 recordNamePrefix:(id)arg4 error:(id *)arg5;	// IMP=0x0040000000048005
+ (id)entityPath;	// IMP=0x0040000000044d8a
- (_Bool)mergeMoveReceiptsWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004983a
- (id)createEncodedMoveReceiptData:(id *)arg1;	// IMP=0x000000000004967a
- (id)createRecordFromSystemFields;	// IMP=0x0000000000044f65

// Remaining properties
@property(retain, nonatomic) NSString *ckRecordName; // @dynamic ckRecordName;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) NSData *ckShare; // @dynamic ckShare;
@property(retain, nonatomic) NSData *encodedRecord; // @dynamic encodedRecord;
@property(retain, nonatomic) NSNumber *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSNumber *entityPK; // @dynamic entityPK;
@property(retain, nonatomic) NSNumber *lastExportedTransactionNumber; // @dynamic lastExportedTransactionNumber;
@property(retain, nonatomic) NSSet *moveReceipts; // @dynamic moveReceipts;
@property(nonatomic) _Bool needsCloudDelete; // @dynamic needsCloudDelete;
@property(nonatomic) _Bool needsLocalDelete; // @dynamic needsLocalDelete;
@property(nonatomic) _Bool needsUpload; // @dynamic needsUpload;
@property(retain, nonatomic) NSNumber *pendingExportChangeTypeNumber; // @dynamic pendingExportChangeTypeNumber;
@property(retain, nonatomic) NSNumber *pendingExportTransactionNumber; // @dynamic pendingExportTransactionNumber;
@property(retain, nonatomic) NSCKRecordZoneMetadata *recordZone; // @dynamic recordZone;

@end
