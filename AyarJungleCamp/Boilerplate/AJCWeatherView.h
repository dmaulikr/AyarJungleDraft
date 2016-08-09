//
//  AJCWeatherView.h
//  Boilerplate
//
//  Created by agatsa on 8/9/16.
//  Copyright © 2016 Agatsa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AJCWeatherViewDelegate <NSObject>

@optional
-(void) userTappedOnWeatherView;

@end

@interface AJCWeatherView : UIView {
    
    UILabel *ajcTempLabel;
    UIImageView *weatherIconImageView;
    UILabel *currentDayLabel;
    UILabel *currentWeatherConditionsLabel;
    UIView *infoView;
    UIActivityIndicatorView *spinner;
    
}

@property (nonatomic) id <AJCWeatherViewDelegate> delegate;

-(instancetype) initWithSize:(CGSize)size;

-(void) updateWeatherConditions:(NSString *)weatherConditionString weatherIconString:(NSString *)weatherIconString temperature:(NSString *) temperatureReading andCurrentDay:(NSString *)currentDay;

-(void) startLoading;

-(void) stopLoading;

@end
