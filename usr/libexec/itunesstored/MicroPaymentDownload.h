//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MicroPayment, NSData, NSNumber, NSString;

@interface MicroPaymentDownload : NSManagedObject
{
}

+ (id)propertiesForDownloadEntities;	// IMP=0x004000000017c938
+ (id)downloadEntityFromContext:(id)arg1;	// IMP=0x001000000017c8eb
- (void)awakeFromInsert;	// IMP=0x002000000017ce12
- (void)setValuesWithAssetDictionary:(id)arg1;	// IMP=0x001000000017caf2
- (id)copySKDownload;	// IMP=0x001000000017c9a3

// Remaining properties
@property(retain, nonatomic) NSNumber *contentLength; // @dynamic contentLength;
@property(retain, nonatomic) NSNumber *downloadID; // @dynamic downloadID;
@property(retain, nonatomic) NSString *downloadKey; // @dynamic downloadKey;
@property(retain, nonatomic) NSData *error; // @dynamic error;
@property(retain, nonatomic) NSData *hashArrayData; // @dynamic hashArrayData;
@property(retain, nonatomic) NSNumber *hashChunkSize; // @dynamic hashChunkSize;
@property(retain, nonatomic) NSString *localURL; // @dynamic localURL;
@property(retain, nonatomic) MicroPayment *payment; // @dynamic payment;
@property(retain, nonatomic) NSString *remoteURL; // @dynamic remoteURL;
@property(retain, nonatomic) NSData *sinfs; // @dynamic sinfs;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

