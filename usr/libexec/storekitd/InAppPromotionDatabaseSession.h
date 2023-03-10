//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface InAppPromotionDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003a24
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)promotionInfoForProductIdentifiers:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000352f
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000034c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

