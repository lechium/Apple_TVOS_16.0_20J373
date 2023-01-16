//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteStatement : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a5368
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x00000000002a5313
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a52bf
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a524b
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a5142
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a5055
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a502e
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000002a4ff1
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4fb4
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4f77
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4f36
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4ef9
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4e9c
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4e5c
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4dab
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4cfe
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002a4ca1
- (int)step;	// IMP=0x00000000002a4c60
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00000000002a4bb5
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x00000000002a4b36
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x00000000002a4967

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

