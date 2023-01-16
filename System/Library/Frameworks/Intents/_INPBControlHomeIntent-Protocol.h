//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBHomeContent, _INPBHomeFilter, _INPBHomeUserTask, _INPBIntentMetadata;

@protocol _INPBControlHomeIntent <NSObject>
+ (Class)filtersType;
+ (Class)contentsType;
@property(readonly, nonatomic) _Bool hasUserTask;
@property(retain, nonatomic) _INPBHomeUserTask *userTask;
@property(readonly, nonatomic) _Bool hasTime;
@property(retain, nonatomic) _INPBDateTimeRange *time;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long filtersCount;
@property(copy, nonatomic) NSArray *filters;
@property(readonly, nonatomic) unsigned long long contentsCount;
@property(copy, nonatomic) NSArray *contents;
- (_INPBHomeFilter *)filtersAtIndex:(unsigned long long)arg1;
- (void)addFilters:(_INPBHomeFilter *)arg1;
- (void)clearFilters;
- (_INPBHomeContent *)contentsAtIndex:(unsigned long long)arg1;
- (void)addContents:(_INPBHomeContent *)arg1;
- (void)clearContents;
@end

