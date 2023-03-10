//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CityPersistenceConversions : NSObject
{
}

+ (id)cloudDictionaryRepresentationOfALCity:(id)arg1;	// IMP=0x0080000000037759
+ (id)cityFromALCity:(id)arg1;	// IMP=0x00800000000375fb
+ (id)cloudDictionaryRepresentationOfCity:(id)arg1;	// IMP=0x008000000003731d
+ (id)cityFromCloudDictionary:(id)arg1;	// IMP=0x0080000000037043
+ (id)weatherDetailsDictionaryFromCity:(id)arg1;	// IMP=0x0080000000036423
+ (id)hourlyForecastDictionariesFromCity:(id)arg1;	// IMP=0x00800000000361a0
+ (id)dayForecastDictionariesFromCity:(id)arg1;	// IMP=0x0080000000035e98
+ (_Bool)cityDictionaryHasValidCoordinates:(id)arg1;	// IMP=0x0080000000035d4e
+ (id)dictionaryRepresentationOfCity:(id)arg1;	// IMP=0x00800000000359fa
+ (id)temperatureFromDictionaryRepresentation:(id)arg1;	// IMP=0x00800000000357b9
+ (id)dictionaryRepresentationOfTemperature:(id)arg1;	// IMP=0x00800000000355ea
+ (id)scaleCategoryFromDictionaryRepresentation:(id)arg1;	// IMP=0x00800000000354c8
+ (id)dictionaryRepresentationOfScaleCategory:(id)arg1;	// IMP=0x00800000000352f6
+ (_Bool)isCityValid:(id)arg1;	// IMP=0x008000000003526a
+ (void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2;	// IMP=0x0080000000034ecd
+ (void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2;	// IMP=0x0080000000034a29
+ (id)cityFromDictionary:(id)arg1;	// IMP=0x00800000000338cd

@end

