//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, SQLiteStatement;

@interface SQLiteCursor : NSObject
{
    int _columnCount;	// 8 = 0x8
    unsigned char *_columnDeclaredTypes;	// 16 = 0x10
    NSDictionary *_columnIndexByName;	// 24 = 0x18
    id _columnKeySet;	// 32 = 0x20
    NSMutableArray *_columnNames;	// 40 = 0x28
    struct sqlite3_stmt *_statement;	// 48 = 0x30
    SQLiteStatement *_statementWrapper;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001b57fd
- (unsigned char)_declaredTypeForColumnIndex:(int)arg1;	// IMP=0x00100000001b57de
- (int)_columnTypeForColumnIndex:(int)arg1;	// IMP=0x00100000001b57ce
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x00100000001b57b8
- (id)dictionaryWithValuesForColumnNames:(id)arg1;	// IMP=0x00100000001b5491
- (id)dictionaryWithValuesForColumns;	// IMP=0x00100000001b547d
- (id)URLForColumnName:(id)arg1;	// IMP=0x00100000001b5437
- (id)URLForColumnIndex:(int)arg1;	// IMP=0x00100000001b53d7
- (id)UUIDForColumnName:(id)arg1;	// IMP=0x00100000001b5391
- (id)UUIDForColumnIndex:(int)arg1;	// IMP=0x00100000001b532d
- (id)stringForColumnName:(id)arg1;	// IMP=0x00100000001b52e7
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00100000001b528a
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x00100000001b5233
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x00100000001b519d
- (id)JSONObjectForColumnIndex:(int)arg1;	// IMP=0x00100000001b503d
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x00100000001b5009
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x00100000001b4ff9
- (int)intForColumnName:(id)arg1;	// IMP=0x00100000001b4fc5
- (int)intForColumnIndex:(int)arg1;	// IMP=0x00100000001b4fb5
- (double)doubleForColumnName:(id)arg1;	// IMP=0x00100000001b4f80
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00100000001b4f70
- (id)dateForColumnName:(id)arg1;	// IMP=0x00100000001b4f2a
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x00100000001b4eaa
- (id)dataForColumnName:(id)arg1;	// IMP=0x00100000001b4e64
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x00100000001b4df1
- (void)dealloc;	// IMP=0x00100000001b4db7
- (id)initWithStatement:(id)arg1;	// IMP=0x00100000001b4ba4

@end

