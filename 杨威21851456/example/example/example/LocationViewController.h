//
//  LocationViewController.h
//  example
//
//  Created by 杨威 on 2018/12/12.
//  Copyright © 2018年 杨威. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AMapLocationKit/AMapLocationKit.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapSearchKit/AMapSearchKit.h>

@interface LocationViewController : UIViewController{
    UITextField *textField;
}

@property (nonatomic, strong) MAMapView *mapView;

@property (nonatomic, strong) AMapLocationManager *locationManager;

@end
