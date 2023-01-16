//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PQLNameInjection;

@interface CPLPrequeliteTable : NSObject
{
    NSString *_tableName;	// 8 = 0x8
    NSString *_injectedTableName;	// 16 = 0x10
    PQLNameInjection *_injection;	// 24 = 0x18
}

+ (id)tableWithName:(id)arg1;	// IMP=0x002000000004877b
- (void).cxx_destruct;	// IMP=0x002000000004897a
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)redactedDescription;	// IMP=0x0010000000048947
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x0010000000048908
@property(readonly, nonatomic) NSString *injectedTableName;
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1;	// IMP=0x00100000000487c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
