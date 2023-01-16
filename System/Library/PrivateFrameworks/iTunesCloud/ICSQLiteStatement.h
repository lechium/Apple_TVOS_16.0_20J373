//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteStatement : NSObject
{
    ICSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    ICSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000235c6
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) ICSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x0000000000023571
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000000234fd
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000000233f4
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023307
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000000232ca
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x000000000002328d
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023250
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x000000000002320f
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000000000231d2
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023121
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000023074
- (int)step;	// IMP=0x0000000000023033
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x0000000000022f88
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x0000000000022edf
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 connection:(id)arg2;	// IMP=0x0000000000022d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
