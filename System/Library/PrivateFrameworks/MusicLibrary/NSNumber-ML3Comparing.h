//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (ML3Comparing)
- (_Bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;	// IMP=0x00900000000661a6
- (id)ml_stringValueForSQL;	// IMP=0x0090000000178834
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;	// IMP=0x009000000017878c
@end
