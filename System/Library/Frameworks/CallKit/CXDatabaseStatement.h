//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject
{
    struct sqlite3_stmt *_statement;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (_Bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000053833
- (_Bool)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000053699
- (_Bool)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000053532
- (_Bool)bind:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000052f91
- (_Bool)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000052a39
- (_Bool)executeWithError:(id *)arg1;	// IMP=0x0000000000052a20
- (void)finalize;	// IMP=0x00000000000529c0
- (void)dealloc;	// IMP=0x0000000000052982
- (id)init;	// IMP=0x0000000000052974
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000052740

@end

