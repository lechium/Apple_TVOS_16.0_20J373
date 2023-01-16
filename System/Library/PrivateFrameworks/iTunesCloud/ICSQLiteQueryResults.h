//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteQueryResults : NSObject
{
    ICSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015fda3
- (int)clearBindings;	// IMP=0x000000000015fd8d
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fd77
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fd61
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fd4b
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fd35
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fd1f
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x000000000015fd09
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fcf3
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fcdd
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fcc7
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x000000000015fcb1
@property(readonly, copy, nonatomic) NSString *firstStringValue;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015f806
- (id)initWithStatement:(id)arg1;	// IMP=0x000000000015f79b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

