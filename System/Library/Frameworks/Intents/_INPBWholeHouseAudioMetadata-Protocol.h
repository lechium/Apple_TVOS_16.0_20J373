//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBWholeHouseAudioMetadata <NSObject>
+ (Class)spokenEntityTypeType;
+ (Class)spokenEntityNameType;
+ (Class)speakerRoomsType;
+ (Class)speakerNamesType;
+ (Class)permanentNamesType;
+ (Class)intentSpeakerRoomsType;
+ (Class)intentSpeakerNamesType;
+ (Class)intentPermanentNamesType;
+ (Class)intentDestinationSpeakersType;
@property(readonly, nonatomic) unsigned long long spokenEntityTypesCount;
@property(copy, nonatomic) NSArray *spokenEntityTypes;
@property(readonly, nonatomic) unsigned long long spokenEntityNamesCount;
@property(copy, nonatomic) NSArray *spokenEntityNames;
@property(readonly, nonatomic) unsigned long long speakerRoomsCount;
@property(copy, nonatomic) NSArray *speakerRooms;
@property(readonly, nonatomic) unsigned long long speakerNamesCount;
@property(copy, nonatomic) NSArray *speakerNames;
@property(readonly, nonatomic) unsigned long long permanentNamesCount;
@property(copy, nonatomic) NSArray *permanentNames;
@property(nonatomic) _Bool hasNumberOfHomeAutomationWords;
@property(nonatomic) int numberOfHomeAutomationWords;
@property(nonatomic) _Bool hasIsWholeHouseAudioCommand;
@property(nonatomic) _Bool isWholeHouseAudioCommand;
@property(nonatomic) _Bool hasIsPauseOrStop;
@property(nonatomic) _Bool isPauseOrStop;
@property(nonatomic) _Bool hasIsParticipatingSpeaker;
@property(nonatomic) _Bool isParticipatingSpeaker;
@property(nonatomic) _Bool hasIsInHere;
@property(nonatomic) _Bool isInHere;
@property(nonatomic) _Bool hasIsAllSpeakers;
@property(nonatomic) _Bool isAllSpeakers;
@property(readonly, nonatomic) unsigned long long intentSpeakerRoomsCount;
@property(copy, nonatomic) NSArray *intentSpeakerRooms;
@property(readonly, nonatomic) unsigned long long intentSpeakerNamesCount;
@property(copy, nonatomic) NSArray *intentSpeakerNames;
@property(readonly, nonatomic) unsigned long long intentPermanentNamesCount;
@property(copy, nonatomic) NSArray *intentPermanentNames;
@property(readonly, nonatomic) unsigned long long intentDestinationSpeakersCount;
@property(copy, nonatomic) NSArray *intentDestinationSpeakers;
@property(nonatomic) _Bool hasHasExcept;
@property(nonatomic) _Bool hasExcept;
- (_INPBString *)spokenEntityTypeAtIndex:(unsigned long long)arg1;
- (void)addSpokenEntityType:(_INPBString *)arg1;
- (void)clearSpokenEntityTypes;
- (_INPBString *)spokenEntityNameAtIndex:(unsigned long long)arg1;
- (void)addSpokenEntityName:(_INPBString *)arg1;
- (void)clearSpokenEntityNames;
- (_INPBString *)speakerRoomsAtIndex:(unsigned long long)arg1;
- (void)addSpeakerRooms:(_INPBString *)arg1;
- (void)clearSpeakerRooms;
- (_INPBString *)speakerNamesAtIndex:(unsigned long long)arg1;
- (void)addSpeakerNames:(_INPBString *)arg1;
- (void)clearSpeakerNames;
- (_INPBString *)permanentNamesAtIndex:(unsigned long long)arg1;
- (void)addPermanentNames:(_INPBString *)arg1;
- (void)clearPermanentNames;
- (_INPBString *)intentSpeakerRoomsAtIndex:(unsigned long long)arg1;
- (void)addIntentSpeakerRooms:(_INPBString *)arg1;
- (void)clearIntentSpeakerRooms;
- (_INPBString *)intentSpeakerNamesAtIndex:(unsigned long long)arg1;
- (void)addIntentSpeakerNames:(_INPBString *)arg1;
- (void)clearIntentSpeakerNames;
- (_INPBString *)intentPermanentNamesAtIndex:(unsigned long long)arg1;
- (void)addIntentPermanentNames:(_INPBString *)arg1;
- (void)clearIntentPermanentNames;
- (_INPBString *)intentDestinationSpeakersAtIndex:(unsigned long long)arg1;
- (void)addIntentDestinationSpeakers:(_INPBString *)arg1;
- (void)clearIntentDestinationSpeakers;
@end

