//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSDate, NSPersistentHistoryToken, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportMetadata : NSManagedObject
{
}

+ (id)entityPath;	// IMP=0x00400000002b6ff3

// Remaining properties
@property(retain, nonatomic) NSDate *exportedAt; // @dynamic exportedAt;
@property(retain, nonatomic) NSPersistentHistoryToken *historyToken; // @dynamic historyToken;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *operations; // @dynamic operations;

@end

