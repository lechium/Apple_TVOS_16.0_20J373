//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (IMChatDictionaryLogging)
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;	// IMP=0x00200000000758f2
+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;	// IMP=0x00200000000757ec
- (id)__im_copyChatDictionaryWithRedactedMessageContent;	// IMP=0x00100000000023d0
- (id)__immphc_dateForKey:(id)arg1;	// IMP=0x00100000000166bb
- (id)__immphc_attributedStringForKey:(id)arg1;	// IMP=0x00100000000165f3
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x001000000001eeca
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x001000000001ee7f
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x001000000001ee34
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x001000000001ede9
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;	// IMP=0x001000000001ed97
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;	// IMP=0x001000000001ed45
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;	// IMP=0x001000000001ecfa
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;	// IMP=0x001000000001ecaf
- (_Bool)boolValueForKey:(id)arg1 withDefault:(_Bool)arg2;	// IMP=0x001000000001ec64
- (_Bool)isArchivable_im;	// IMP=0x001000000002e9df
- (id)allValuesSortedByGUIDKeyWithBackupOrder:(id)arg1;	// IMP=0x0010000000045d32
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginDisplayName;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginBundleID;
@property(readonly, nonatomic) NSNumber *__im_associatedMessageContentType;
@property(readonly, nonatomic) NSString *__im_associatedMessageSummary;
@end

