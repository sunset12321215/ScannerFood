//
//  Polyline.h
//  ScanerFood
//
//  Created by Lucas Luu on 8/14/18.
//  Copyright © 2018 Lucas Luu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Polyline : NSObject

@property (strong, nonatomic) NSString* points;

-(instancetype)initWithDataSource:(NSDictionary*)dataSource;

@end
