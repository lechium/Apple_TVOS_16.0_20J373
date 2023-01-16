//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteTransporter : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
}

+ (void)_removeKnownDatabasePath:(id)arg1;	// IMP=0x004000000000e3d3
+ (_Bool)_isKnownDatabasePath:(id)arg1;	// IMP=0x001000000000e1e1
+ (void)_addKnownDatabasePath:(id)arg1;	// IMP=0x001000000000e09a
- (void).cxx_destruct;	// IMP=0x002000000000e4e8
- (void)performTransportationUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dfbb
- (_Bool)endTransporationAndRemoveDatabase;	// IMP=0x001000000000df28
- (_Bool)canBeginTransportation;	// IMP=0x001000000000dd79
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x001000000000dd0e

@end

