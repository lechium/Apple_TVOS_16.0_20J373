//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated)
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;	// IMP=0x001000000029408e
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x001000000038e804
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;	// IMP=0x0010000000010ac8
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000008a32f
- (id)_intents_defaultReadableDescription;	// IMP=0x001000000008a24d
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x001000000013a179
- (id)_intents_indexingRepresentation;	// IMP=0x00100000002a3a8a
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x001000000038e657

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

